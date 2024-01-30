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
- (id)initWithMessageID:(id)a0;
- (id)init;
- (id)generateIVWithLength:(long long)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
