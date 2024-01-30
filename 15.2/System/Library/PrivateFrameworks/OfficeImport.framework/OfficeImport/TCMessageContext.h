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
+ (id)currentObjectOrPlaceholder;
+ (void)reportObjectOrPlaceholder:(id)a0 withWarning:(id)a1 parameters:(char *)a2;
+ (void)pushAffectedObject:(id)a0;
+ (void)popAffectedObject;
+ (void)pushAffectedObjectPlaceholder;
+ (void)popAffectedObjectPlaceholder:(id)a0;
+ (unsigned long long)saveAffectedObjectStack;
+ (void)restoreAffectedObjectStack:(unsigned long long)a0;
+ (void)reportWarningsToDelegate;
+ (void)reportObject:(id)a0 withWarning:(id)a1;
+ (void)reportWarning:(id)a0;
+ (void)reportWarningException:(id)a0;
+ (void)reportErrorException:(id)a0;
+ (void)createContextForCurrentThread;
+ (void)removeContextForCurrentThread;
+ (id)getWarningArray;
+ (id)getErrorArray;
+ (unsigned long long)getErrorCount;
+ (void)setIsFileStructuredStorage:(BOOL)a0;
+ (BOOL)isFileStructuredStorage;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)reportWarningForObject:(id)a0 warning:(id)a1 parameterList:(char *)a2;
- (id)currentObjectOrPlaceholder;
- (void)addErrorMessageEntry:(id)a0;
- (void)addWarningMessageEntry:(id)a0;
- (void)pushAffectedObject:(id)a0;
- (void)popAffectedObject;
- (void)pushAffectedObjectPlaceholder;
- (void)popAffectedObjectPlaceholder:(id)a0;
- (unsigned long long)saveAffectedObjectStack;
- (void)restoreAffectedObjectStack:(unsigned long long)a0;
- (void)reportWarningsToDelegate;
- (void)setAffectedObject:(id)a0 forPlaceholderWithKey:(id)a1;
- (void)resolveObjectOfCurrentAffectedObjectPlaceholder;
- (void)replacePlaceholdersWithObjects;

@end
