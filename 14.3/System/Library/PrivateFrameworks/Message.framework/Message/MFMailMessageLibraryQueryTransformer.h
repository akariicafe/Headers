@class NSString, EDMessagePersistence, MFMessageCriterionConverter, NSObject;
@protocol OS_os_log;

@interface MFMailMessageLibraryQueryTransformer : NSObject <EFLoggable, MFMessageCriterionConverterDelegate>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) MFMessageCriterionConverter *criterionConverter;
@property (readonly, weak, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned int)optionsForQuery:(id)a0;
- (long long)messageCriterionConverter:(id)a0 criterionTypeForKey:(id)a1;
- (void).cxx_destruct;
- (id)criterionForQuery:(id)a0;
- (id)initWithMessagePersistence:(id)a0;
- (id)messageCriterionConverter:(id)a0 expressionForConstantValue:(id)a1 withCriterionType:(long long)a2;
- (id)mailAccountForIdentifier:(id)a0;

@end
