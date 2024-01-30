@class NSString;

@interface TTSGenericMarker : NSObject <TTSMarker>

@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) long long markType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
