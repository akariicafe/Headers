@class BrightnessSystemClientInternal, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BrightnessSystemClientExportedObj : NSObject <BacklightSystemDelegateXpcProtocol> {
    id /* block */ clientBlock;
    NSObject<OS_dispatch_queue> *queue;
}

@property (nonatomic) BrightnessSystemClientInternal *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
