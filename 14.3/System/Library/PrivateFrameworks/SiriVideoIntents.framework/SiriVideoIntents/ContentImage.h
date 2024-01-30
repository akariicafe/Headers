@class NSString, NSNumber;

@interface ContentImage : INObject

@property (copy, nonatomic) NSString *templateUrl;
@property (copy, nonatomic) NSNumber *width;
@property (copy, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *format;

@end
