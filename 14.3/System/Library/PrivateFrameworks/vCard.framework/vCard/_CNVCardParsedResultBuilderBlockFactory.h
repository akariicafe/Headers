@class NSString;

@interface _CNVCardParsedResultBuilderBlockFactory : NSObject <CNVCardParsedResultBuilderFactory> {
    id /* block */ _block;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (id)makeBuilder;

@end
