@class NSString, EKEventStore;

@interface EKSecureKeyedArchiverSerializer : NSObject <EKSerializer>

@property (readonly, nonatomic) EKEventStore *eventStore;
@property (readonly, nonatomic) NSString *version;

- (id)serializeEvent:(id)a0 error:(id *)a1;
- (id)deserializeData:(id)a0 error:(id *)a1;
- (id)versionFromData:(id)a0 error:(id *)a1;
- (id)initWithEventStore:(id)a0 withVersion:(id)a1;
- (void).cxx_destruct;

@end
