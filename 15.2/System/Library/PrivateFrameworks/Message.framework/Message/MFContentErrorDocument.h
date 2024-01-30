@class NSError, NSString;

@interface MFContentErrorDocument : NSObject

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSString *content;

- (void).cxx_destruct;
- (id)initWithMimePart:(id)a0;

@end
