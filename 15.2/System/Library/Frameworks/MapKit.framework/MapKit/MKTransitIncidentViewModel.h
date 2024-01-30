@class NSString, UIColor;

@interface MKTransitIncidentViewModel : NSObject

@property (retain, nonatomic) NSString *symbolName;
@property (nonatomic) NSString *message;
@property (nonatomic, getter=isBlocking) BOOL blocking;
@property (nonatomic) BOOL showImage;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIColor *symbolColor;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
