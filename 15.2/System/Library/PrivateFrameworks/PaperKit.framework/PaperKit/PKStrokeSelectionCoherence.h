@class NSArray, NSString;

@interface PKStrokeSelectionCoherence : PKStrokeSelection <NSItemProviderReading>

@property (class, readonly, copy, nonatomic) NSArray *readableTypeIdentifiersForItemProvider;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;


@end
