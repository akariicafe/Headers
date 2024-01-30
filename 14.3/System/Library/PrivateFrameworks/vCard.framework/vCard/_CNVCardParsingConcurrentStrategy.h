@class NSString;

@interface _CNVCardParsingConcurrentStrategy : NSObject <CNVCardParsingConcurrencyStrategy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)parseData:(id)a0 options:(id)a1 resultFactory:(id)a2;
- (id)seriallyParsedData:(id)a0 options:(id)a1 resultFactory:(id)a2;

@end
