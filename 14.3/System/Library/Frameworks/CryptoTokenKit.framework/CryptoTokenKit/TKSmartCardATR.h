@class NSData, NSArray, NSMutableArray;

@interface TKSmartCardATR : NSObject {
    NSMutableArray *_interfaces;
}

@property (readonly, nonatomic) NSData *bytes;
@property (readonly, nonatomic) NSArray *protocols;
@property (readonly, nonatomic) NSData *historicalBytes;
@property (readonly, nonatomic) NSArray *historicalRecords;

- (id)initWithSource:(id /* block */)a0;
- (void).cxx_destruct;
- (id)parseFromSource:(id /* block */)a0;
- (id)interfaceGroupAtIndex:(long long)a0;
- (id)_formatHexData:(id)a0 to:(id)a1;
- (id)interfaceGroupForProtocol:(unsigned long long)a0;
- (id)description;
- (id)initWithBytes:(id)a0;

@end
