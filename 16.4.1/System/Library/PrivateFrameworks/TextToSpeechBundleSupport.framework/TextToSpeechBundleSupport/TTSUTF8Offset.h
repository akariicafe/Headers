@interface TTSUTF8Offset : NSObject

@property (nonatomic) long long cStringOffset;
@property (nonatomic) long long actualPos;
@property (nonatomic) long long actualLength;
@property (nonatomic) long long lengthDifference;

- (id)description;

@end
