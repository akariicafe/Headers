@class NSString, PPMockRTAddress, PPMockRTLocation;

@interface PPMockRTMapItem : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) PPMockRTAddress *address;
@property (retain, nonatomic) PPMockRTLocation *location;

- (void).cxx_destruct;

@end
