@class NSString, SBHCustomIconElement;

@interface SBHTestFakeWidgetIconDescriptor : NSObject <SBHTestWidgetIconDescriptor>

@property (readonly, nonatomic) SBHCustomIconElement *element;
@property (readonly, nonatomic) unsigned long long sizeClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)sbh_iconDescriptorType;
- (BOOL)sbh_isValidWithError:(id *)a0;
- (id)initWithElement:(id)a0 sizeClass:(unsigned long long)a1;

@end
