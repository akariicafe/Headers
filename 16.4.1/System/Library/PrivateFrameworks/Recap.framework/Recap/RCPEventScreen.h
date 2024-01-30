@class NSString;

@interface RCPEventScreen : NSObject

@property (nonatomic) struct CGSize { double width; double height; } pointSize;
@property (nonatomic) double scale;
@property (copy, nonatomic) NSString *displayUUID;
@property (nonatomic) unsigned int displayID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
