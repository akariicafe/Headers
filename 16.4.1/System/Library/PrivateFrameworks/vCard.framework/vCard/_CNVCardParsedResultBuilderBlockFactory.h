@class NSString;

@interface _CNVCardParsedResultBuilderBlockFactory : NSObject <CNVCardParsedResultBuilderFactory> {
    id /* block */ _block;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)makeBuilder;

@end
