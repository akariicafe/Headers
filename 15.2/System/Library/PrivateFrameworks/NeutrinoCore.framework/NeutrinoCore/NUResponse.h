@class NSError;

@interface NUResponse : NSObject

@property (retain) id result;
@property (retain) NSError *error;

- (id)initWithError:(id)a0;
- (id)result:(id *)a0;
- (id)initWithResult:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
