@class NSArray, NSString, UIImage, MPAVRoute;

@interface MPAVRoutingViewItem : NSObject <NSObject>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) MPAVRoute *mainRoute;
@property (readonly, nonatomic) NSArray *routes;
@property (readonly, nonatomic) MPAVRoute *leader;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemWithActionTitle:(id)a0 subtitle:(id)a1 enabled:(BOOL)a2 identifier:(id)a3 image:(id)a4;
+ (id)itemWithLeader:(id)a0 members:(id)a1;
+ (id)itemWithRoute:(id)a0;

@end
