@class NSURL, NSMutableDictionary, NSString;

@interface SUCoreEvent : NSObject

@property (retain, nonatomic) NSMutableDictionary *allFields;
@property (nonatomic) BOOL changedSinceReported;
@property (retain, nonatomic) NSURL *serverURL;
@property (retain, nonatomic) NSString *reportedUUID;

- (void)incrementErrorCount;
- (void).cxx_destruct;
- (id)initWithEventDictionary:(id)a0 extendingWith:(id)a1 reportingToServer:(id)a2;
- (BOOL)isEqualErrorEvent:(id)a0;
- (BOOL)isSuccess;
- (id)getAugmentedEvent;

@end
