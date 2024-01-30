@interface SNSystemConfiguration : NSObject {
    unsigned int _channelCount;
    double _sampleRate;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;

@end
