@class NSString;

@interface CKTranscriptLayoutMessageEditingContext : NSObject

@property (retain, nonatomic) NSString *editedMessageGuid;
@property (nonatomic) double editedMessageHeight;

- (BOOL)isEqualToContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithEditedMessageGuid:(id)a0 editedMessageHeight:(double)a1;

@end
