@class NSString;

@interface AVCCaptionsToken : NSObject

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) BOOL hasSpaceAfter;

- (void)dealloc;
- (id)description;
- (id)initWithText:(id)a0 confidence:(double)a1 spaceAfter:(BOOL)a2;

@end
