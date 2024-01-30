@interface WLSocketMessage : NSObject

@property (nonatomic) unsigned long long type;

+ (id)messageWithData:(id)a0 error:(id *)a1;

- (id)initWithType:(unsigned long long)a0;

@end
