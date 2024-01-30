@class NSString, _TtC28SiriPrivateLearningInference35PlusContactSuggestionCoreDataRecord;

@interface SiriPrivateLearningInference.PlusContactReferenceCoreDataRecord : NSManagedObject

@property (nonatomic, copy) NSString *contactId;
@property (nonatomic, copy) NSString *contactLabel;
@property (nonatomic, retain) _TtC28SiriPrivateLearningInference35PlusContactSuggestionCoreDataRecord *contactSuggestion;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
