@class NSString, NSData;

@interface TRIPBAny : TRIPBMessage

@property (copy, nonatomic) NSString *typeURL;
@property (copy, nonatomic) NSData *value;

+ (id)descriptor;
+ (id)anyWithMessage:(id)a0 error:(id *)a1;
+ (id)anyWithMessage:(id)a0 typeURLPrefix:(id)a1 error:(id *)a2;

- (id)initWithMessage:(id)a0 error:(id *)a1;
- (id)initWithMessage:(id)a0 typeURLPrefix:(id)a1 error:(id *)a2;
- (BOOL)packWithMessage:(id)a0 error:(id *)a1;
- (BOOL)packWithMessage:(id)a0 typeURLPrefix:(id)a1 error:(id *)a2;
- (id)unpackMessageClass:(Class)a0 error:(id *)a1;

@end
