@class NSError;

@interface NUResponse : NSObject

@property (retain) id result;
@property (retain) NSError *error;

- (id)result:(id *)a0;
- (id)initWithResult:(id)a0;
- (id)initWithError:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
