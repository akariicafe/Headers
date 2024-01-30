@class NSData, NSString;

@interface SFIncrementingIVGenerator : NSObject <SFIVGenerator> {
    id _incrementingIVGeneratorInternal;
}

@property (copy, nonatomic) NSData *messageID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRandomMessageID;
- (id)generateIVWithLength:(long long)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMessageID:(id)a0;

@end
