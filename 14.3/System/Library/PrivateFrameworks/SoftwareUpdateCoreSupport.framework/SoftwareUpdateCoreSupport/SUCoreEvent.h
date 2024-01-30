@class NSURL, NSMutableDictionary, NSString;

@interface SUCoreEvent : NSObject

@property (retain, nonatomic) NSMutableDictionary *allFields;
@property (nonatomic) BOOL changedSinceReported;
@property (retain, nonatomic) NSURL *serverURL;
@property (retain, nonatomic) NSString *reportedUUID;

- (void).cxx_destruct;
- (BOOL)isSuccess;
- (void)incrementErrorCount;
- (id)initWithEventDictionary:(id)a0 extendingWith:(id)a1 reportingToServer:(id)a2;
- (id)getAugmentedEvent;
- (BOOL)isEqualErrorEvent:(id)a0;

@end
