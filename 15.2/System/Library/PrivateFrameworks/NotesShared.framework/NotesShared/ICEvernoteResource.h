@class NSString, NSData;

@interface ICEvernoteResource : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isAttachment;
@property (retain, nonatomic) NSString *mime;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *md5Hash;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (nonatomic) double duration;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
