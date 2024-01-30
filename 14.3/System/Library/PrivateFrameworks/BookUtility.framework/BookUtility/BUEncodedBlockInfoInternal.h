@class NSString;

@interface BUEncodedBlockInfoInternal : NSObject <BUEncodedBlockInfo>

@property (readonly, nonatomic) unsigned long long encodedLength;
@property (readonly, nonatomic) unsigned long long decodedLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
