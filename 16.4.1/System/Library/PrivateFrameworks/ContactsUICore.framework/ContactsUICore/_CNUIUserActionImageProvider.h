@class NSString;

@interface _CNUIUserActionImageProvider : NSObject <CNUIUserActionImageProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)symbolImageNameForActionType:(id)a0;
+ (id)symbolOulinedImageNameForActionType:(id)a0;
+ (id)imageResourceNameForActionType:(id)a0;
+ (id)imageForActionType:(id)a0 imageStyle:(long long)a1;


@end
