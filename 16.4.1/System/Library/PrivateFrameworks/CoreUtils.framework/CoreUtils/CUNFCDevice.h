@class NFTag, NSURL, NSUUID;

@interface CUNFCDevice : NSObject

@property (retain, nonatomic) NFTag *tag;
@property (copy, nonatomic) NSURL *advertisedURI;
@property (copy, nonatomic) NSUUID *identifier;

- (id)description;
- (void).cxx_destruct;

@end
