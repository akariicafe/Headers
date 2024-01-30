@class NSString, NSExtension;

@interface WGWidgetDatum : NSObject <WGDatum>

@property (readonly, nonatomic) NSExtension *representedExtension;
@property (readonly, copy, nonatomic) NSString *datumIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithExtension:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
