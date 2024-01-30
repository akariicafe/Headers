@class NSString;

@interface CAROEMPunchThrough : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) unsigned long long type;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
