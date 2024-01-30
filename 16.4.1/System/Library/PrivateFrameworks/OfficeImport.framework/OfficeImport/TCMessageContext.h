@class NSMutableDictionary, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TCMessageContext : NSObject {
    NSMutableSet *m_warnings;
    NSMutableSet *m_errors;
    NSMutableArray *m_affectedObjectStack;
    NSMutableDictionary *m_placeholderToObjectMap;
    NSObject<OS_dispatch_queue> *mMessageSyncQueue;
}

+ (void)initialize;
+ (void)reportError:(id)a0;
+ (id)getWarningArray;
+ (void)createContextForCurrentThread;
+ (id)currentObjectOrPlaceholder;
+ (id)getErrorArray;
+ (unsigned long long)getErrorCount;
+ (BOOL)isFileStructuredStorage;
+ (void)popAffectedObject;
+ (void)popAffectedObjectPlaceholder:(id)a0;
+ (void)pushAffectedObject:(id)a0;
+ (void)pushAffectedObjectPlaceholder;
+ (void)removeContextForCurrentThread;
+ (void)reportErrorException:(id)a0;
+ (void)reportObject:(id)a0 withWarning:(id)a1;
+ (void)reportObjectOrPlaceholder:(id)a0 withWarning:(id)a1 parameters:(char *)a2;
+ (void)reportWarning:(id)a0;
+ (void)reportWarningException:(id)a0;
+ (void)reportWarningsToDelegate;
+ (void)restoreAffectedObjectStack:(unsigned long long)a0;
+ (unsigned long long)saveAffectedObjectStack;
+ (void)setIsFileStructuredStorage:(BOOL)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addErrorMessageEntry:(id)a0;
- (void)addWarningMessageEntry:(id)a0;
- (id)currentObjectOrPlaceholder;
- (void)popAffectedObject;
- (void)popAffectedObjectPlaceholder:(id)a0;
- (void)pushAffectedObject:(id)a0;
- (void)pushAffectedObjectPlaceholder;
- (void)replacePlaceholdersWithObjects;
- (void)reportWarningForObject:(id)a0 warning:(id)a1 parameterList:(char *)a2;
- (void)reportWarningsToDelegate;
- (void)resolveObjectOfCurrentAffectedObjectPlaceholder;
- (void)restoreAffectedObjectStack:(unsigned long long)a0;
- (unsigned long long)saveAffectedObjectStack;
- (void)setAffectedObject:(id)a0 forPlaceholderWithKey:(id)a1;

@end
