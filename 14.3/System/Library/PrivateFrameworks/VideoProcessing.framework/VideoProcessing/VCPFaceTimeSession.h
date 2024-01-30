@class NSString, NSArray, NSDate, NSMutableArray;

@interface VCPFaceTimeSession : NSObject {
    NSMutableArray *_faces;
}

@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSString *callerID;
@property (retain, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSArray *faces;

+ (id)sessionFromManagedObject:(id)a0;
+ (id)session;
+ (id)createWithSessionID:(id)a0 callerID:(id)a1 andDate:(id)a2;

- (id)managedObjectForContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0 callerID:(id)a1 andDate:(id)a2;
- (void)addFace:(id)a0;
- (id)description;

@end
