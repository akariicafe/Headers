@class NSDictionary;

@interface BLTPBFileURLMetaData : NSObject

@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) long long sequenceNumberError;
@property (readonly, nonatomic) unsigned long long sessionState;
@property (readonly, nonatomic) NSDictionary *extraMetadata;

- (id)transportData;
- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0 sequenceNumberManager:(id)a1;
- (id)initWithSequenceNumberManager:(id)a0 extraMetadata:(id)a1;

@end
