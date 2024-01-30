@class NSString;

@interface _NSStandardTextGraphicsContextProvider : NSObject <NSTextGraphicsContextProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)graphicsContextForApplicationFrameworkContext:(long long)a0;
+ (Class)colorClassForApplicationFrameworkContext:(long long)a0;


@end
