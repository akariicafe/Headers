@class NSArray, NSString;

@interface CNComposeRecipients : NSObject <NSItemProviderReading>

@property (class, readonly, copy, nonatomic) NSArray *readableTypeIdentifiersForItemProvider;

@property (readonly, copy, nonatomic) NSArray *recipients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initWithRecipients:(id)a0;

@end
