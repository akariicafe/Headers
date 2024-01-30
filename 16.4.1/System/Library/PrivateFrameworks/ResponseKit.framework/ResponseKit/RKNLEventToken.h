@class NSString;

@interface RKNLEventToken : NSObject

@property (retain) NSString *string;
@property unsigned int tokenID;
@property long long location;
@property long long length;

- (void).cxx_destruct;
- (id)initWithString:(id)a0 location:(long long)a1 length:(long long)a2;

@end
