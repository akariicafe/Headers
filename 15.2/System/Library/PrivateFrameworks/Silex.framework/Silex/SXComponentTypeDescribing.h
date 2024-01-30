@class NSString;

@interface SXComponentTypeDescribing : NSObject <SXComponentTypeDescribing, NSCopying>

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) int role;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptionWithType:(id)a0 role:(int)a1;

@end
