@class NSString, NSData;

@interface MKMessageAttachment : NSObject

@property (nonatomic) long long transferState;
@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;
@property (copy, nonatomic) NSString *filename;
@property (retain, nonatomic) NSData *data;

- (void)write;
- (void).cxx_destruct;
- (id)initWithID:(id)a0 contentType:(id)a1 base64Data:(id)a2;

@end
