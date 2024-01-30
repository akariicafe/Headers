@class NSArray, NSString;

@interface SKUIEditorialLinkLayoutRequest : NSObject <SKUILayoutRequest>

@property (copy, nonatomic) NSArray *links;
@property (nonatomic) double width;
@property (readonly, nonatomic) Class layoutClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
