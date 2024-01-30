@interface GEODefaultEnvironmentInfo : GEOEnvironmentInfo

- (BOOL)isActive;
- (id)init;
- (id)_manifestURLString;
- (void)makeActive;

@end
