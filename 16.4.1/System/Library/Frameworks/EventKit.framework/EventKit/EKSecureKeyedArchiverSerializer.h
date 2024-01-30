@class NSString, EKEventStore;

@interface EKSecureKeyedArchiverSerializer : NSObject <EKSerializer>

@property (readonly, nonatomic) EKEventStore *eventStore;
@property (readonly, nonatomic) NSString *version;

- (void).cxx_destruct;
- (id)initWithEventStore:(id)a0 withVersion:(id)a1;
- (id)deserializeData:(id)a0 isNew:(id *)a1 error:(id *)a2;
- (id)serializeEvent:(id)a0 error:(id *)a1;
- (id)versionFromData:(id)a0 error:(id *)a1;

@end
