@class NSError;

@interface IMResult : NSObject

@property (retain, nonatomic) NSError *inError;
@property (retain, nonatomic) id inValue;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) id value;

- (id)initWithSuccess:(id)a0;
- (id)initWithError:(id)a0;
- (id)initWithState:(long long)a0 value:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
