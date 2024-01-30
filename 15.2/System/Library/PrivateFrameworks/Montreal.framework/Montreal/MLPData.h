@class NSData;

@interface MLPData : NSObject

@property unsigned int label;
@property (retain) NSData *oneHot;
@property (retain) NSData *pixels;
@property (retain) NSData *classDist;

- (void).cxx_destruct;

@end
