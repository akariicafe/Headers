@class NSData, NSDictionary, NSString;

@interface ANAnnouncementDataItem : NSObject <NSSecureCoding, ANMessage>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned long long flags;
@property (readonly, nonatomic) NSDictionary *info;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)message;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copy;
- (id)initWithData:(id)a0 type:(unsigned long long)a1;
- (id)_stringForDataType:(unsigned long long)a0;
- (BOOL)processAudioWithEffects:(unsigned long long)a0 error:(id *)a1;

@end
