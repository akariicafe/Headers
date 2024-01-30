@class NSString;
@protocol ICItemIdentifier;

@interface ICButtonItemIdentifier : NSObject <ICItemIdentifier>

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) id<ICItemIdentifier> parentIdentifier;
@property (readonly, copy, nonatomic) NSString *displayText;
@property (readonly, copy, nonatomic) NSString *systemImageName;
@property (readonly, nonatomic) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 parentIdentifier:(id)a1;

@end
