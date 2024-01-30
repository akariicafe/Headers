@class NSMutableData, NSData, NSError;

@interface CBReadRequest : NSObject {
    char *_bufferPtr;
}

@property (retain, nonatomic) NSMutableData *bufferData;
@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long minLength;
@property (nonatomic) unsigned long long maxLength;

- (void).cxx_destruct;

@end
