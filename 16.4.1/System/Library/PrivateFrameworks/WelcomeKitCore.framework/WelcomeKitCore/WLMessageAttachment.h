@class NSString, NSData;

@interface WLMessageAttachment : NSObject

@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSString *mimeType;
@property (readonly, nonatomic) NSString *uti;
@property (readonly, nonatomic) NSData *data;
@property (nonatomic) long long *rowID;
@property (nonatomic) NSString *guid;

- (void).cxx_destruct;
- (id)_initWithData:(id)a0 fileName:(id)a1 mimeType:(id)a2 uti:(id)a3;

@end
