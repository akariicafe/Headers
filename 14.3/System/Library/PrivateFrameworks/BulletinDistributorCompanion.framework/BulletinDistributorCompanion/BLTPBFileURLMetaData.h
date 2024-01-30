@class NSDictionary;

@interface BLTPBFileURLMetaData : NSObject

@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) long long sequenceNumberError;
@property (readonly, nonatomic) unsigned long long sessionState;
@property (readonly, nonatomic) NSDictionary *extraMetadata;

- (void).cxx_destruct;
- (id)transportData;
- (id)initWithSequenceNumberManager:(id)a0 extraMetadata:(id)a1;
- (id)initWithMetadata:(id)a0 sequenceNumberManager:(id)a1;

@end
