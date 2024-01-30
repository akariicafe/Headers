@class VMUMutableClassInfo;

@interface VMUSwiftRuntimeInfo : NSObject

@property (readonly, nonatomic) unsigned long long nativeWeakReferenceMarkerMask;
@property (readonly, nonatomic) unsigned long long nativeWeakReferenceMarkerValue;
@property (readonly, nonatomic) unsigned long long nativeWeakReferencePointerMask;
@property (readonly, nonatomic) BOOL nativeWeakReferencePointerIsSideTable;
@property (readonly, nonatomic) unsigned long long refcountIsSideTableMarkerMask;
@property (readonly, nonatomic) unsigned long long refcountIsSideTableMarkerValue;
@property (readonly, nonatomic) unsigned long long sideTablePointerMask;
@property (readonly, nonatomic) unsigned char sideTablePointerRightShift;
@property (readonly, nonatomic) unsigned char sideTablePointerLeftShift;
@property (readonly, nonatomic) VMUMutableClassInfo *sideTableLayoutWithScannableOwnerPointer;
@property (readonly, nonatomic) VMUMutableClassInfo *sideTableLayoutWithUnscannableOwnerPointer;
@property (readonly, nonatomic) VMUMutableClassInfo *unownedExtraDataLayout;
@property (readonly, nonatomic) BOOL runtimeHasStableABI;

- (id)initWithSwiftCore:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a0 memoryReader:(id /* block */)a1;
- (void).cxx_destruct;

@end
